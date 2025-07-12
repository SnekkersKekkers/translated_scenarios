BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","Alright, let's join the brass band!");
MsgClose();
ScrFadeOut(0);
BGOpen("sc604",0);
ScrFadeIn(0);
VoicePlay("H510000000_33_000");
MsgDisp("Manager","On the third Sunday of every month,
we have a general practice, so please
be sure to show up.");
VoicePlay("H510000000_33_010");
MsgDisp("Manager","Let's do our best together to give
some great performances.");
MsgDisp("主人公","Yes, I'm looking forward to it!");
MsgDisp("主人公","(Alright, let's do our best!)");
SEPlay("EV_SE_DOOR_013");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C32_HIMURO_A",0.01);
ChOpen(32,254,0,0,0,#1,#1,0,0);
VoicePlay("H510000000_32_000");
MsgDisp("VP Himuro","I'm Himuro, the advisor for
the brass band.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("H510000000_32_010");
MsgDisp("VP Himuro","New members, begin learning the
basics from the more experienced members.
Start there.");
VoicePlay("H510000000_38_000");
MsgDisp("Members","Yes!");
MsgDisp("主人公","Yes.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("H510000000_32_020");
MsgDisp("VP Himuro","If I remember correctly, you're a
student in Mikage-sensei's class.
Do you enjoy music?");
MsgDisp("主人公","Yes, I like it.");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("H510000000_32_030");
MsgDisp("VP Himuro","Very well.
Take it seriously. It's from there that
the joy of music comes.");
ChEye(32,1);
ChMouth(32,1);
VoicePlay("H510000000_32_040");
MsgDisp("VP Himuro","Everyone, just remember this as well.
We have no need for slackers in
the brass band.");
ChEye(32,1);
ChMouth(32,1);
ChEyeOpenLevel(32,0);
VoicePlay("H510000000_32_050");
MsgDisp("VP Himuro","I'll have those who skip our
general practices or who cannot balance
this with their studies leave.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("H510000000_32_060");
MsgDisp("VP Himuro","That is all.");
MsgDisp("主人公","(So Himuro-sensei is the advisor......
I'll have to be careful not to skip......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
