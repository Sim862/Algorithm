#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
	stack<int> priceDeltas;

	answer.push_back(0);
	priceDeltas.push(0);

	for (int i = 1; i < prices.size(); i++)
	{
		answer.push_back(0);

		if (prices[priceDeltas.top()] > prices[i])
		{
			while (priceDeltas.size() > 0) {

				if (prices[priceDeltas.top()] > prices[i])
				{
					answer[priceDeltas.top()] = i - priceDeltas.top();
					priceDeltas.pop();
				}
				else {
					break;
				}
			}
		}
		
		priceDeltas.push(i);
	}

	for (int i = 0; i < priceDeltas.size();)
	{
		answer[priceDeltas.top()] = prices.size() - 1 - priceDeltas.top();
		priceDeltas.pop();
	}
    return answer;
}