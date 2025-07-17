ChEyeOpenLevel(6,#1);
ChCheek(6,0);
BGMStop();
MsgDisp("主人公","I'm sorry...
I...");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("T020621000_06_370");
MsgDisp("Himuro","Stop.
... Enough already.");
MsgDisp("主人公","But...");
BGMPlay("BGM_C06_INORI_B",0.01);
Wait(40,0);
VoicePlay("T020621000_06_380");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","You don't have to apologize.
I already had a feeling about it anyway,
deep down...");
VoicePlay("T020621000_06_390");
ChEye(6,2);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","That all I can do is just see you off.");
VoicePlay("T020621000_06_400");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
MsgDisp("Himuro","But...
I just wanted to hold on to the time I
spent with you, with everyone.");
VoicePlay("T020621000_06_410");
ChEye(6,2);
ChMouth(6,0);
ChEyeOpenLevel(6,0);
MsgDisp("Himuro","Because if I don't, I'll just end up alone
again.");
MsgDisp("主人公","｛氷室＊＊｝...");
VoicePlay("T020621000_06_420");
ChEye(6,2);
ChMouth(6,3);
ChMotion(6,0);
MsgDisp("Himuro","... I'm sorry.
Thank you for everything.");
VoicePlay("T020621000_06_430");
ChEye(6,2);
ChMouth(6,4);
ChMotion(6,0);
MsgDisp("Himuro","...Goodbye.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(6,0,0);
Wait(120);
