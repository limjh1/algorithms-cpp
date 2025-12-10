// link: https://www.hackerrank.com/challenges/the-quickest-way-up/problem
// date: 2025-11-20
// idea: BFS, o(v+e)


const int MAX_SIZE = 100;
const int INF = 1e9;

int quickestWayUp(vectorvectorint ladders, vectorvectorint snakes) {  
      
    vectorint vecMove(MAX_SIZE + 1);
    for (int i = 1; i = MAX_SIZE; ++i) 
    {
        vecMove[i] = i;
    }
    
    for (const auto &ladder  ladders) 
    {
        int iSt = ladder[0];
        int iEn = ladder[1];
        vecMove[iSt] = iEn;
    }
    
    for (const auto &snake  snakes) 
    {
        int iSt = snake[0];
        int iEn = snake[1];
        vecMove[iSt] = iEn;
    }

    queueint q;
    vectorint vecDiceCount(MAX_SIZE + 1, INF);
    
    vecDiceCount[1] = 0;
    q.push(1);

    while (!q.empty()) 
    {
        int iCurNode = q.front();
        q.pop();

        if (iCurNode == MAX_SIZE) 
        {
            return vecDiceCount[iCurNode];
        }

        for (int dice = 1; dice = 6; ++dice) 
        {
            int iNextNode = iCurNode + dice;
            if (iNextNode  INF) 
                continue;

            iNextNode = vecMove[iNextNode];

            if (vecDiceCount[iNextNode] == INF) 
            {
                vecDiceCount[iNextNode] = vecDiceCount[iCurNode] + 1;
                q.push(iNextNode);
            }
        }
    }

    return -1;
}