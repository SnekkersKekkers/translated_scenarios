BGOpen("sc500",0);
ScrFadeIn(0);
MsgDisp("主人公","(I think I'll stop by the gardening club's
field again today before heading home.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,2,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛御影＊＊｝.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoiceEVSPlay(7);
VoicePlay("G110700800_07_000");
MsgDisp("Mikage","｛主人公｝, that's good.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700800_07_010");
MsgDisp("Mikage","Once you start thinking about plants on
your way home, you've become a great
gardening club member.");
MsgDisp("主人公","Really?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700800_07_020");
MsgDisp("Mikage","Yeah, welcome to the world of gardening.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700800_07_030");
MsgDisp("Mikage","Though, it's going to be difficult from
now on, you know?");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700800_07_040");
MsgDisp("Mikage","Rain, wind, temperature.
You need to take all these things into
account, you know.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700800_07_050");
MsgDisp("Mikage","Typhoon season kills me.");
MsgDisp("主人公","That's right isn't it...... what should I
do then......");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("G110700800_07_060");
MsgDisp("Mikage","Haha, it's too early to be thinking of
that. The weather's going to be nice for a
while.");
MsgDisp("主人公","(Since I've joined the gardening club, I
feel like maybe I've changed a
little......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
