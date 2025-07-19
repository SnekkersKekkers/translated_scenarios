MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,2,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P840400000_04_000");
MsgDisp("Nanatsumori","Haー...that was quite a lot to move.");
MsgDisp("主人公","Yeah.
It's thanks to ｛七ツ森＊｝'s help, you
really saved me!");
ChEye(4,2);
ChMouth(4,3);
VoicePlay("P840400000_04_010");
MsgDisp("Nanatsumori","I know how heavy the blackout curtains can
be. I couldn't leave a girl to carry them
by herself.");
ChEye(4,0);
ChMotion(4,0,1);
VoicePlay("P840400000_04_020");
MsgDisp("Nanatsumori","When I see people working so hard, I can't
just leave them alone, can I?");
MsgDisp("主人公","Hehe!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P840400000_04_030");
MsgDisp("Nanatsumori","Let's go out once you reach a stopping
point?
As a reward, I'll treat you to takoyaki.");
MsgDisp("主人公","(Yayー!
I'm glad my work also went well.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
