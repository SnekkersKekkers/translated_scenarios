BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,254,0,0,4,#1,#1,4,0);
VoiceEVSPlay(8);
VoicePlay("L060800001_08_000");
MsgDisp("Shirahane","｛主人公｝.");
MsgDisp("主人公","Ah, ｛大地＊＊｝!
What's up?");
ChEye(8,3);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
VoicePlay("L060800001_08_010");
MsgDisp("Shirahane","......C'mere with me.");
MsgDisp("主人公","?");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
ChEye(8,4);
ChMouth(8,0);
ChCheek(8,7);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
BGOpen("sc000",1);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("L060800001_08_020");
MsgDisp("Shirahane","Today's White Day, right?
So, I came here to give you this
in return.");
MsgDisp("主人公","Is that what we came here for?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
SEPlay("EV_SE_665");
SEWait();
VoicePlay("L060800001_08_030");
MsgDisp("Shirahane","Heheh.
Here it is.
I hope you end up likin' it.");
MsgDisp("主人公","Huh, a present?
Thanks......!");
ChEye(8,4);
ChMouth(8,3);
ChMotion(8,0,1);
ChCheek(8,9);
VoicePlay("L060800001_08_040");
MsgDisp("Shirahane","No problem.
Ah, it's embarrassin', so open it
later, 'kay?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("L060800001_08_050");
MsgDisp("Shirahane","Well, since we're here already,
let's head home together!");
MsgDisp("主人公","Yeah!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(8);
MsgDisp("主人公","(I got a White Day
present from ｛大地＊＊｝!
I'm so happy.)");
