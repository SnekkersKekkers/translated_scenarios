ChLayout(1);
ChOpen(3,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P840300000_03_000");
MsgDisp("Honda","I get the feeling that you're totally a
jack-of-all-trades.");
MsgDisp("主人公","Ah, ｛本多＊＊｝.
Are you enjoying the cultural festival?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("P840300000_03_010");
MsgDisp("Honda","Yeah, it's thanks to you guys at the
student council club. On behalf of
everyone, I give you my thanks.");
ChFace(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("P840300000_03_020");
MsgDisp("Honda","Thank you very much!");
MsgDisp("主人公","Hehe, it was no problem.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("P840300000_03_030");
MsgDisp("Honda","Now it's time for my personal thanks.
Let's go and drink the Gardening Club's
tea. It'll be my treat.");
MsgDisp("主人公","(Hehe, I was praised by
｛本多＊＊｝! )");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
