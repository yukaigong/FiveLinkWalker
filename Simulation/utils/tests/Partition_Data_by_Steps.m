
%% Partition Data by steps
[Data_array,Time_array] = DataTS2DataArray(Data);
impact_index = find(Data_array.LegSwitch == 1);
impact_time = Time_array(impact_index);