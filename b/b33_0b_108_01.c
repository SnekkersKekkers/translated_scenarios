ChClose(3,0,0);
ChClose(1,0,0);
ChClose(4,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(1,255,0,0,0,-1,-1,0,3);
ChOpen(3,255,0,0,0,-1,-1,0,3);
ChNanaType(0);
ChOpen(4,255,0,0,0,-1,-1,0,3);
ScrFadeIn(1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("B330B10801_01_000");
MsgDisp("Kazama","Come to think of it, this 
haunted house went under some
renovation work last month.");
ChEyeOpenLevel(1,0);
ChEye(4,1);
ChMouth(4,3);
VoicePlay("B330B10801_04_000");
MsgDisp("Nanatsumori","In other words, t
here's been a version update.");
MsgDisp("主人公","∋");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("B330B10801_03_000");
MsgDisp("Honda","How super fun!
Let's all search for what's changed.");
MsgDisp("主人公","H-Hey.
Isn't everyone scared?");
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,-1);
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("B330B10801_03_010");
MsgDisp("Honda","My eyes fall onto the tricks 
before I feel scared.
I dn't often notice the ghosts.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B10801_04_010");
MsgDisp("Nanatsumori","I get it.
I also find the sets well made
and end up gazing at them.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B330B10801_01_010");
MsgDisp("Kazama","I don't get scared of haunted 
houses in the first place.");
MsgDisp("主人公","Ughh...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B330B10801_01_020");
MsgDisp("Kazama","But, it can't be helped.
For the sake of the 
scaredy cat especially——");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B330B10801_01_030");
MsgDisp("Kazama","I'll let you walk in front.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,5,1);
VoicePlay("B330B10801_04_020");
MsgDisp("Nanatsumori","ＧＯ！");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("B330B10801_03_020");
MsgDisp("Honda","Attack!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_MANY");
ChClose(1,0,30);
ChClose(3,0,30);
ChClose(4,0,30);
ScrQuake(0);
SEWait();
MsgDisp("主人公","(Waa～!
｛風真＊＊｝ is so mean∈))");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChOpen(1,255,7,0,0,-1,-1,0,3,0,0);
ChOpen(3,255,7,0,0,-1,-1,0,3,0,0);
ChNanaType(0);
ChOpen(4,255,7,0,0,-1,-1,0,3,0,0);
