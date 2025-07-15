BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Looks like ｛柊＊＊＊｝ isn't here yet...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","｛柊＊＊＊｝, did something happen?");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(33,254,0,0,0,#1,#1,0,0);
VoicePlay("B110500000_33_000");
MsgDisp("Guy","Do you want to see it or not?");
MsgDisp("主人公","Eh∈　See what...?");
ChEye(33,1);
ChMouth(33,0);
VoicePlay("B110500000_33_010");
MsgDisp("Guy","It's alright, you look like the seeing
type.
C'mon, come with me.");
ChPosition(33,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
MsgClose();
ChOpen(5,253,0,0,0,#1,#1,0,1,0,30);
MsgDispSksp(1,5);
VoicePlay("B110500000_05_000");
MsgDisp("Hiiragi","Just where do you 
intend on taking her?");
MsgDispSksp(0);
ChEye(33,0);
ChMouth(33,1);
VoicePlay("B110500000_33_020");
MsgDisp("Guy","Hm, no can do, no can do.
It's unfortunate, but you're not the
seeing type.");
MsgDispSksp(1,5);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,4);
VoicePlay("B110500000_05_010");
MsgDisp("Hiiragi","No, I would really like to see it.");
MsgDispSksp(0);
ChEye(33,1);
ChMouth(33,1);
VoicePlay("B110500000_33_030");
MsgDisp("Guy","I said you can't, only the chosen ones can
see——");
MsgDispSksp(1,5);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B110500000_05_020");
MsgDisp("Hiiragi","I said I want to see it.");
MsgDispSksp(0);
ChEye(33,2);
ChMouth(33,1);
VoicePlay("B110500000_33_040");
MsgDisp("Guy","No, is this guy scary?
Is he?");
MsgDisp("主人公","............");
ChEye(33,2);
ChMouth(33,2);
VoicePlay("B110500000_33_050");
MsgDisp("Guy","I-I'm sorry. Today's one is only visible
to respectable individuals so I'll come
back next time when there's something that
can be seen.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(33);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
ChPosition(5,0);
Wait(60,0);
MsgDisp("主人公","...I wonder what that guy saw in
｛柊＊＊＊｝?");
ChEye(5,2);
ChMouth(5,4);
ChEyeOpenLevel(5,#1);
VoicePlay("B110500000_05_030");
MsgDisp("Hiiragi","I wonder?
But enough of the \"can see, can't see\"
talk.");
ChEye(5,4);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("B110500000_05_040");
MsgDisp("Hiiragi","More Importantly, I apologize.
It was because I was late that you had to
face this scary situation.");
MsgDisp("主人公","No.
It might've even been a bit funny.");
ChEye(5,3);
ChMouth(5,4);
VoicePlay("B110500000_05_050");
MsgDisp("Hiiragi","Heheh, you really are something.
Then, let's collect ourselves and go.");
