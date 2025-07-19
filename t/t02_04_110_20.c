ChEye(4,2);
ChMouth(4,4);
MsgDisp("主人公","I also...like ｛七ツ森＊｝.");
ChMotion(4,0,1);
VoicePlay("T020411000_04_130");
MsgDisp("Nanatsumori","...Is that alright?");
MsgDisp("主人公","Yes.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,0);
VoicePlay("T020411000_04_140");
MsgDisp("Nanatsumori","......I was really full of anxiety.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
ChEyeOpenLevel(4,10);
VoicePlay("T020411000_04_150");
MsgDisp("Nanatsumori","I was afraid that if I confessed to you
like this, you'd hate me.");
MsgDisp("主人公","No.
I think I was actually waiting for
｛七ツ森＊｝...");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoiceEVSPlay(4);
VoicePlay("T020411000_04_160");
MsgDisp("Nanatsumori","｛主人公｝...");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(4,0,0);
Wait(120,0);
StlOpen("ev_04_18");
ScrFadeIn(0);
VoicePlay("T020411000_04_170");
MsgDisp("Nanatsumori","Thank you.
I'll never let you go again.");
MsgClear();
StlEffect(1,1,60);
Wait(300,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(300,0);
