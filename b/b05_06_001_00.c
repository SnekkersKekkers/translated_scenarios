BGOpen("ne210",0);
EnvAutoSet(1);
MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050600100_34_000");
MsgDisp("Band Guy","Yo, Inori.
I wasn't expecting you here today.
Is that your girlfriend with you?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("B050600100_06_000");
MsgDisp("Himuro","Ah, hey...but, that's incorrect.
We're just friends.");
MsgDisp("主人公","Uhm...
｛氷室＊＊｝, do you come here
often?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("B050600100_06_010");
MsgDisp("Himuro","I guess.
Do you feel the energy in here?
I love rock music.");
VoicePlay("B050600100_34_010");
MsgDisp("Band Guy","Then why don't you play?
Guitar or bass, which one do you want?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("B050600100_06_020");
MsgDisp("Himuro","Eh, so suddenly...
Are you serious?");
VoicePlay("B050600100_34_020");
MsgDisp("Band Guy","Of course.
This is a good opportunity.
So then, which one?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("B050600100_06_030");
MsgDisp("Himuro","......Bass then.");
VoicePlay("B050600100_34_030");
MsgDisp("Band Guy","OK.");
MsgDisp("主人公","｛氷室＊＊｝ can play...?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B050600100_06_040");
MsgDisp("Himuro","I guess we'll see?
Back in junior high school, I borrowed one
from a friend to try.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B050600100_06_050");
MsgDisp("Himuro","Just watch I guess.");
BGMPlay("BGM_C06_INORI_C",0.01);
Wait(50,0);
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
EnvAutoSet(0);
StlOpen("ev_06_03");
StlEye(6,0);
StlMouth(6,1);
ScrFadeIn(0);
MsgDisp("主人公","Woah...
｛氷室＊＊｝ is playing...!");
VoicePlay("B050600100_34_040");
MsgDisp("Band Guy","You're going hard!");
StlEye(6,1);
StlMouth(6,0);
VoicePlay("B050600100_06_060");
MsgDisp("Himuro","Not much to it.");
MsgDisp("主人公","That's not true.
You're amazing, ｛氷室＊＊｝!");
StlEye(6,1);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("B050600100_06_070");
MsgDisp("Himuro","...My rhythm is messy.");
VoicePlay("B050600100_34_050");
MsgDisp("Band Guy","Alright, let's have a quick jam session.");
Wait(30,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
EnvAutoSet(1);
BGMStop(2);
MsgClose();
ScrFadeOut(0);
StlClose();
Wait(60,0);
ScrFadeIn(0);
ChOpen(6,255,2,0,2,0,#1,0,0);
VoicePlay("B050600100_06_080");
MsgDisp("Himuro","...Sigh.");
MsgDisp("主人公","｛氷室＊＊｝!
That was really amazing.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("B050600100_06_090");
MsgDisp("Himuro","Not really.
I just did whatever.");
MsgDisp("主人公","Eh?
Whatever?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("B050600100_06_100");
MsgDisp("Himuro","That's just how it is.
Talent and natural ability.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B050600100_06_110");
MsgDisp("Himuro","Everyone is like this.
Even if you don't realize it, we all have
our strengths and weaknesses.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("B050600100_06_120");
MsgDisp("Himuro","That's why it's foolish to say you can't
do something from the start.
You'll never know unless you try.");
MsgDisp("主人公","Yeah...that's true.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("B050600100_06_130");
MsgDisp("Himuro","Maybe you have the talent to play bass
too?");
MsgDisp("主人公","I-I wonder...?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("B050600100_06_140");
MsgDisp("Himuro","You won't know unless you try.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
VoicePlay("B050600100_06_150");
MsgDisp("Himuro","Excuse me!
Would it be okay for me to borrow your
bass again?");
MsgDisp("主人公","W-Wait a minute!
｛氷室＊＊｝, geez...!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(6,0);
EnvAutoSet(1);
