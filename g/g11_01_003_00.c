BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
SEPlay("EV_SE_787");
MsgDisp("主人公","(Ah, a message from
｛風真＊＊｝. \"Let's walk home
together today\" huh... Okay let's prepare
to go home.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,1,2,2,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110100300_01_000");
MsgDisp("Kazama","...The sky is pretty.");
MsgDisp("主人公","It really is...");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100300_01_010");
MsgDisp("Kazama","Hey, this time feels special, huh?");
MsgDisp("主人公","Special?");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100300_01_020");
MsgDisp("Kazama","This time before the sun sets...
They call it the magic hour.
I like it.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110100300_01_030");
MsgDisp("Kazama","Fishing is good at this time too.");
MsgDisp("主人公","Hehe.
Fish like this time of day too.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100300_01_040");
MsgDisp("Kazama","Yeah, that's why this time is special.");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100300_01_050");
MsgDisp("Kazama","How many more times can I see you when we
come home from school? If you think about
it, it's truly precious, right?");
MsgDisp("主人公","Yeah, that's right.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100300_01_060");
MsgDisp("Kazama","That's why when the timing is right, let's
see this scenery together.");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100300_01_070");
MsgDisp("Kazama","...I'm not saying you absolutely can't
refuse, alright?");
MsgDisp("主人公","... Hm?
Yeah, I got it.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100300_01_080");
MsgDisp("Kazama","...Then, it's decided.");
MsgDisp("主人公","(Huh? ｛風真＊＊｝... I wonder if
he's worried about not being able to go
home with me last time...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
