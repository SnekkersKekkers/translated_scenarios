ChLayout(1);
BGOpen("fp100",1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, then.
I think it's time to head home.)");
VoicePlay("E010710000_07_000");
MsgDisp("Mikage?","Hey");
MsgDisp("主人公","Hm?
That voice...");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,37,0,0,0,#1,#1,0,0);
MsgDisp("主人公","｛御影＊＊｝, that
outfit...
Are you out shopping?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("E010710000_07_010");
MsgDisp("Mikage","I wouldn't go into a fancy store wearing
this.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010710000_07_020");
MsgDisp("Mikage","I was tending to the soil at the Green
Farm in Forest Park.");
MsgDisp("主人公","Is that so.
So you grow plants outside of school too?");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("E010710000_07_030");
MsgDisp("Mikage","I don't need to take care of them every
day.
My kids are low maintenance.");
MsgDisp("主人公","Hehe.
｛御影＊＊｝ has a lot of
children.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("E010710000_07_040");
MsgDisp("Mikage","Green Farm, the gardening club...
I have lots at home too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010710000_07_050");
MsgDisp("Mikage","How about you in class?");
MsgDisp("主人公","Huh... are you talking about us
students...?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("E010710000_07_060");
MsgDisp("Mikage","I think you can find beauty in every
field.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
ChEyeOpenLevel(7,8);
VoicePlay("E010710000_07_070");
MsgDisp("Mikage","See you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
MsgDisp("主人公","(Hmm maybe ｛御影＊＊｝
sees his students as vegetables?)");
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(7,#1);
