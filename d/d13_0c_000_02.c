BGOpen("sc510",0);
BGMPlay("BGM_HANYOU_A",0.01);
ChLayout(2);
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0,0,30);
ChOpen(5,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(6,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D130C00002_05_000");
MsgDisp("Hiiragi","｛主人公｝, over here.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D130C00002_07_000");
MsgDisp("Mikage","Oh, she's coming.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("D130C00002_06_000");
MsgDisp("Himuro","But, it doesn't look like she's holding
anything.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D130C00002_07_010");
MsgDisp("Mikage","Wait wait, don't panic.
The day is still young. ...right?");
MsgDisp("主人公","Today...ah.
Are you talking about Valentine's day?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("D130C00002_06_010");
MsgDisp("Himuro","Look's like she hasn't forgot.
We can calm down now.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("D130C00002_05_010");
MsgDisp("Hiiragi","Then, we'll return to our posts.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("D130C00002_07_020");
MsgDisp("Mikage","Right. With the three of us altogether,
it'll be tough for you too right? Then,
we're all going now.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
BGMStop();
ChClose(7,0,30);
ChClose(5,0,30);
ChClose(6,0,30);
MsgDisp("主人公","(Um...looks like everyone's fussing over
the Valentine's chocolates.)");
MsgClose();
ScrFadeOut(0,0);
