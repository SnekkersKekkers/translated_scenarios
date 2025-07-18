BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(5,255,4,2,2,0,#1,7,0);
ScrFadeIn(0);
VoicePlay("B150500400_05_000");
MsgDisp("Hiiragi","...Haa.");
MsgDisp("主人公","Ah, I'm sorry.");
ChMotion(5,1);
ChEyeOpenLevel(5,#1);
ChCheek(5,5);
VoicePlay("B150500400_05_010");
MsgDisp("Hiiragi","What are you doing, losing control of
yourself?");
ChEye(5,4);
ChMotion(5,0);
ChCheek(5,0);
VoicePlay("B150500400_05_020");
MsgDisp("Hiiragi","I've told you before.
I've already reached my limits of
remaining my usual self.");
MsgDisp("主人公","...Yeah.");
ChEye(5,0);
VoicePlay("B150500400_05_030");
MsgDisp("Hiiragi","I've told you, even I'm a guy too.");
MsgDisp("主人公","...Yeah.");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("B150500400_05_040");
MsgDisp("Hiiragi","But you know, having first stepped onto
the stage at two years-old, I have more
experience with being an actor, than I do
with being a man.");
ChEyeOpenLevel(5,0);
VoicePlay("B150500400_05_050");
MsgDisp("Hiiragi","Two year-olds aren't aware of being a man.
I'm an actor, before I'm a man.");
MsgDisp("主人公","Is...that so?");
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("B150500400_05_060");
MsgDisp("Hiiragi","Yes.
Therefore, today Hiiragi Yanosuke is
switching to another role.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("B150500400_05_070");
MsgDisp("Hiiragi","If I didn't do that, I would have reached
my limit.
Art saves me.");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B150500400_05_080");
MsgDisp("Hiiragi","Haha...
I'm going home.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝...
I wonder what role he is switching to?)");
MsgClose();
ScrFadeOut(0,0);
