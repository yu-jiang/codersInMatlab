function checkImageSize(filepath)

a = imread(filepath);          % This is not working
%a = imread('frame0300.jpg');  % This would work.
fileID = fopen('myfile.csv','a');
for ct = 1:3
    fprintf(fileID,'%d,', int8(a(ct)));
end
fprintf(fileID,'\n');
fclose(fileID);

end