BGOpen("ne000",0);
ScrFadeIn(0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(......Ah! It's a text message from
Goro-sensei. It says:)");
MsgDisp("主人公","(\"It seems like a new spot has opened up
in a corner of the Forest Park Please make
sure to write about it♪\")");
MsgDisp("主人公","(Alright, as Habacha's newest staff
member, let's get to it!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp000",0);
ScrFadeIn(0);
MsgDisp("主人公","(Let's see......
Where is that new spot that Goro-sensei
mentioned?)");
MsgClose();
ScrFadeOut(0);
BGOpen("fp200",0);
ScrFadeIn(0);
MsgDisp("主人公","(Wow......What a beautiful spring!
This is the Forest Park's new spot,
——\"The Home of the Fireflies\"!)");
VoicePlay("D210000110_31_000");
MsgDisp("Goro?","You got here quickly.");
MsgClose();
SEPlay("EV_SE_625");
SEWait();
BGMPlay("BGM_C31_GORO_A",0.01);
ChOpen(31,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, Goro-sensei!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("D210000110_31_010");
MsgDisp("Goro","Hehe, it's a beautiful place, right?
Thanks to the reconstruction of the dam, I
heard there will be a lot more fireflies
now in the summer.");
MsgDisp("主人公","Fireflies!
That's amazing!");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,2);
VoicePlay("D210000110_31_020");
MsgDisp("Goro","That's not all.
The \"Home of the Fireflies\" has a hidden
and mysterious power.");
MsgDisp("主人公","A mysterious power...?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,1);
VoicePlay("D210000110_31_030");
MsgDisp("Goro","That's right.
If you visit the gazebo with your beloved
while the fireflies are glowing——");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,4);
VoicePlay("D210000110_31_040");
MsgDisp("Goro","Oh my, how stunning.
You'll be able to hear the voice of their
heart!");
MsgDisp("主人公","Ehhh∋
Amazing, is that really true?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
VoicePlay("D210000110_31_050");
MsgDisp("Goro","Whether you believe it or not is
All・Up・To・You!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("D210000110_31_060");
MsgDisp("Goro","Okay then! I'm looking forward to reading
an article all full of your unique style.
Adieuー♪");
MsgClose();
SEPlay("EV_SE_626");
ChClose(31);
MsgDisp("主人公","(A brand new date spot \"The Home of the
Fireflies\", huh?
Time to go home and write an article!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
