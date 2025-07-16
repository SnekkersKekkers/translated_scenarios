ScrFadeIn(0);
MsgDisp("主人公","Alright...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,3,0,0,#1,#1,0,0);
VoicePlay("P840600000_06_000");
MsgDisp("Himuro","Your dexterity is good.");
MsgDisp("主人公","Eheh, thank you.");
MsgDisp("主人公","Here's your tea, sorry to have kept you
waitingー!");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P840600000_06_010");
MsgDisp("Himuro","It was well-received huh?
The tea that you brewed.");
MsgDisp("主人公","Yeah, I'm glad.
Ah, would you like some,
｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("P840600000_06_020");
MsgDisp("Himuro","I already had some.
Of course it was delicious.
Do you have a talent for it or something?");
MsgDisp("主人公","Thank you.
But, I have to work hard on other things!");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("P840600000_06_030");
MsgDisp("Himuro","You're fully motivated huh.
As expected.");
MsgDisp("主人公","(Yay!
I was praised by ｛氷室＊＊｝! )");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
