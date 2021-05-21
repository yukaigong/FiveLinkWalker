function [Data_array,Time_array] = DataTS2DataArray(Data)
%Change the fields of Data from TimeSeries to Array.
fn = fieldnames(Data);
for i = 1:length(fn)
    Data_array.(fn{i}) = reshape(Data.(fn{i}).Data,size(Data.(fn{i}).Data,1),[]);
end
Time_array = Data.(fn{i}).Time;
