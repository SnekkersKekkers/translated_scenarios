BGOpen("ho210",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I finished my summer homework. Time to
take a break and watch some TV——)");
SEPlay("EV_SE_721",0,0.6);
SEWait();
VoicePlay("D010300700_43_000");
MsgDisp("Moderator","Correct answer∈ And the winner of the 
\"Quiz Brain Interhigh\" is Habataki 
Academy's second year student——");
MsgDisp("主人公","(Eh......)");
MsgClose();
ScrFadeOut(0);
BGOpen("ex990",0);
StlOpen("ev_03_13");
BGMPlay("BGM_C03_HONDA_I",0.01);
StlEye(3,0);
StlMouth(3,0);
SEPlay("EV_SE_722",0,0.8);
SEPlay("EV_SE_707",0,0.3);
ScrFadeIn(0);
SEPlay("EV_SE_GAYA_003",0,0.8);
SEStop("EV_SE_707",1.5);
VoicePlay("D010300700_43_010");
MsgDisp("Moderator","Iku Honda-kun!");
MsgDisp("主人公","∈
｛本多＊＊｝∋");
VoicePlay("D010300700_43_020");
MsgDisp("Moderator","Honda-kun, congrats!
How are you feeling?");
StlEye(3,1);
VoicePlay("D010300700_03_000");
MsgDisp("Honda","Yeah, this is the best!");
StlEye(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("D010300700_03_010");
MsgDisp("Honda","This crown and cape really make me look
like a Quiz King, huh?");
VoicePlay("D010300700_43_030");
MsgDisp("Moderator","Yes, it really suits you.
Is there anyone you would like to thank?");
StlEye(3,1);
VoicePlay("D010300700_03_020");
MsgDisp("Honda","My dad.
My mom and my sister will be really
happy too.");
StlEye(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("D010300700_43_040");
MsgDisp("Moderator","Honda-kun, you and your family seem
very close!");
VoicePlay("D010300700_43_050");
MsgDisp("Moderator","The live broadcast of this year's
\"Quiz Brain Interhigh\" will end here.
Tune in again next year～!");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("D010300700_03_030");
MsgDisp("Honda","Eh, already?　Wait, wait!
There's one more person I'd like to——");
BGMStop();
SEStop("EV_SE_GAYA_003",2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("主人公","(Hehe! It ended in the middle of what he
was saying. ｛本多＊＊｝ was amazing
though......)");
MsgDisp("主人公","(I wonder if he'll let me interview
him for Habacha?)");
MsgClose();
Wait(40,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60,0);
BGOpen("ho100",0);
SEPlay("EV_SE_DOOR_001");
ScrFadeIn(0);
MsgDisp("主人公","Coming!");
SEStop("EV_SE_DOOR_001");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(3,255,1,0,3,-1,-1,0,0);
VoicePlay("D010300700_03_040");
MsgDisp("Honda","Sorry for bothering you!");
MsgDisp("主人公","Ehh∋
｛本多＊＊｝, what are you doing here?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D010300700_03_050");
MsgDisp("Honda","I actually got crowned the Quiz King
today.");
MsgDisp("主人公","I saw it on TV!
Congratulations, you were amazing.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("D010300700_03_060");
MsgDisp("Honda","Ah, really?
You were watching on TV, huh～
That makes it even more frustrating.");
MsgDisp("主人公","Frustrating?
Why? You won, didn't you?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("D010300700_03_070");
MsgDisp("Honda","Because I was thanking people and you
were the last on my list. I was going to
shout your name.");
MsgDisp("主人公","Ehh∋");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D010300700_03_080");
MsgDisp("Honda","Then the broadcast ended......
So I came here to do it in person.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("D010300700_03_090");
MsgDisp("Honda","That's it.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
Wait(45,0);
SEPlay("EV_SE_DOOR_023");
ChClose(3);
MsgDisp("主人公","(I'm glad he didn't shout my name on
TV......It would be troublesome when we go
back to school after break......)");
MsgDisp("主人公","(Ah!　Didn't I want to interview
｛本多＊＊｝? Quick, let's go after him
while he's still nearby!)");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(3,0);
