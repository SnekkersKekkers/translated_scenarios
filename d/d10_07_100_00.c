BGOpen("sc210",0);
ChLayout(1);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
MsgClose();
ChOpen(7,37,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("D100710000_07_000");
MsgDisp("Mikage","｛主人公｝, what's next period's
class?");
MsgDisp("主人公","Eh?
Isn't it Biology?");
ChEye(7,5);
ChMouth(7,3);
ChMotion(7,4);
VoicePlay("D100710000_07_010");
MsgDisp("Mikage","Oh, you're right!
I have to get to the staff room quick.
See you.");
MsgDisp("主人公","｛御影＊＊｝, no!
You can't go dressed like that.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("D100710000_07_020");
MsgDisp("Mikage","Ooh, right.
I guess I should change my clothes first.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
ChEyeOpenLevel(7,8);
VoicePlay("D100710000_07_030");
MsgDisp("Mikage","...You, lately you've been starting to
look more and more like a caring wife,
huh?");
MsgDisp("主人公","Ehh∋");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
VoicePlay("D100710000_07_040");
MsgDisp("Mikage","Haha, later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
MsgDisp("主人公","(Lately I've been chatting with
｛御影＊＊｝ a lot
but...Does that really make me look like a
wife...)");
MsgClose();
ScrFadeOut(0,0);
