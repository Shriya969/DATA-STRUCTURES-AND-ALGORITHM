class Solution {
public:
    vector<double> convertTemperature(double celsius) {
     vector<double> ans;
     double kelvin;
     kelvin=celsius+273.15;
     ans.push_back(kelvin);
     double fahrenheit;
     fahrenheit=celsius*1.80+32.00;
     ans.push_back(fahrenheit);
      return ans;
    }
};