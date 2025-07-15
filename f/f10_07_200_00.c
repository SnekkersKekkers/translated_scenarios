ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(I have to move to the science room for
next class.
Let's head there early.)");
SEPlay("EV_SE_FOOT_WALK_KEEP_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("sc352",0);
ScrFadeIn(0);
MsgClose();
MsgDisp("主人公","(Ah, ｛御影＊＊｝ is already here.
With him is...)");
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,37,0,0,0,#1,#1,0,1,0,30);
ChOpen(5,254,0,0,4,#1,#1,0,2,0,30);
VoicePlay("F100720000_05_000");
MsgDisp("Hiiragi","Ah, so it's you. It is almost time for
class to start, correct? We were lost in
conversation.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100720000_07_000");
MsgDisp("Mikage","Yanosuke's curiosity has been piqued.
It's good, isn't it?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100720000_05_010");
MsgDisp("Hiiragi","Yes, I'm very deeply interested.");
MsgDisp("主人公","｛柊＊＊＊｝, Are you interested in
biology and chemistry?");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("F100720000_05_020");
MsgDisp("Hiiragi","That would be quite surprising, would it
not?");
MsgDisp("主人公","Eh, is that not it?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("F100720000_07_010");
MsgDisp("Mikage","｛主人公｝. Yanosuke has a wide range
of interestsー. Right now, it's that
sliding blackboard.");
MsgDisp("主人公","Blackboard?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2);
VoicePlay("F100720000_05_030");
MsgDisp("Hiiragi","Unfortunately, it is not for biology
studies. That blackboard is an efficient
way to make effective use of the wall
space. It is an exceptional item.");
SEPlay("EV_SE_SCHOOL_002");
Wait(60,0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100720000_05_040");
MsgDisp("Hiiragi","The bell hs already rung.
Please excuse me.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100720000_07_020");
MsgDisp("Mikage","Oh, see you later.");
SEStop("EV_SE_SCHOOL_002",3);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgClose();
ChClose(7,0,30);
ChOpen(7,37,0,0,0,#1,#1,0,0,0,30);
MsgDisp("主人公","｛柊＊＊＊｝ seemed to be having a lot of
fun.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100720000_07_030");
MsgDisp("Mikage","Yeah, when he smiles, I can't help but
feel a sense of relief.");
MsgDisp("主人公","Yeah. Since ｛柊＊＊＊｝ always looks so
busy.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("F100720000_07_040");
MsgDisp("Mikage","If he's that happy, maybe I'll make a
blackboard for him next time.");
MsgDisp("主人公","Ehh?");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("F100720000_07_050");
MsgDisp("Mikage","We should make a sliding blackboard for
our class, too, right?");
BGMStop();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
Wait(60,0);
SEPlay("EV_SE_666",1,0.6);
Wait(60,0);
MsgDisp("主人公","(Hehe, so ｛柊＊＊＊｝ wasn't asking him
about the lesson, but was interested in
the blackboard. ｛御影＊＊｝ is so
kind.)");
SEStop("EV_SE_666");
MsgClose();
ScrFadeOut(0,0);
