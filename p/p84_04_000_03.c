MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Huh? The stock list says it's in
inventory, but the shelves are empty...");
ChMotion(4,1,1);
VoicePlay("P840400003_04_000");
MsgDisp("Nanatsumori","Did you forget to write it?");
MsgDisp("主人公","Maybe that's it...");
VoicePlay("P840400003_46_000");
MsgDisp("School Girl","Umm, it seems like I won't be able to get
flowers?");
MsgDisp("主人公","I'm very sorry, could you please wait a
moment?");
MsgClose();
ScrFadeOut(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
VoicePlay("P840400003_04_010");
MsgDisp("Nanatsumori","Yes, there's one left.");
MsgDisp("主人公","Thank you!
Um, would this be enough?");
VoicePlay("P840400003_46_010");
MsgDisp("School Girl","Ah...yes. I'm sorry, even though you
especially prepared it for me. Well
then....");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
SEWait();
MsgDisp("主人公","Sorry, even though it's the cultural
festival, I made you do student council
work...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P840400003_04_020");
MsgDisp("Nanatsumori","It's nothing.
But, it's good to work hard but you can't
lose your concentration, you know?");
MsgDisp("主人公","(Uugh.... I inconvenienced
｛七ツ森＊｝. A huge failure...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
