BGMStop();
MsgDisp("主人公","I'm sorry......");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ChCheek(1,0);
VoicePlay("T020101000_01_670");
MsgDisp("Kazama","......I see.");
BGMPlay("BGM_C01_RYOUTA_C",0.01);
MsgDisp("主人公","｛風真＊＊｝,Thank you for always thinking
of me but......I'm sorry.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("T020101000_01_680");
MsgDisp("Kazama","No.
......I'm sorry too.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("T020101000_01_690");
MsgDisp("Kazama","I've been so excited ever since I saw 
you on the day of the entrance ceremony.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("T020101000_01_700");
MsgDisp("Kazama","But for the last three years I've
only been a nuisance to you huh......");
MsgDisp("主人公","No, that's not true.
｛風真＊＊｝'s feelings made me happy.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("T020101000_01_710");
MsgDisp("Kazama","You're too kind, I'm sorry for 
making you say such unpleasant things.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("T020101000_01_720");
MsgDisp("Kazama","But, Thank you.");
MsgDisp("主人公","｛風真＊＊｝……");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020101000_01_730");
MsgDisp("Kazama","We couldn't have a wedding, but we did
have a graduation ceremony together,
right?");
MsgDisp("主人公","Yeah......");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoiceEVSPlay(1);
VoicePlay("T020101000_01_740");
MsgDisp("Kazama","......｛主人公｝,
Congratulations on your graduation.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(1,0,0);
Wait(120);
