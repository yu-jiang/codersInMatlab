% CHECKIMAGESIZE_SCRIPT   Generate executable checkImageSize from
%  checkImageSize.
% 
% Script generated from project 'checkImageSize.prj' on 30-Nov-2021.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.EmbeddedCodeConfig'.
cfg = coder.config('exe','ecoder',true);
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;
cfg.GenerateExampleMain = 'GenerateCodeAndCompile';

%% Define argument types for entry-point 'checkImageSize'.
ARGS = cell(1,1);
ARGS{1} = cell(1,1);
ARGS{1}{1} = coder.typeof('X',[1 Inf],[0 1]);

%% Invoke MATLAB Coder.
codegen -config cfg checkImageSize -args ARGS{1}

