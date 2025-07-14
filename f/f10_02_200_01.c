BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(We're moving classrooms for the next
lesson...
I'll head back early.)");
VoicePlay("F100220001_02_000");
MsgDisp("Sassa?","Heeh, nice.
Is that a national hot spring travelogue?");
VoicePlay("F100220001_05_000");
MsgDisp("Hiiragi?","Yes, It was a gift from an audience
member.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(2,254,3,0,4,#1,#1,0,1);
ChOpen(5,254,0,0,4,#1,#1,0,2);
MsgDisp("主人公","(Ah, ｛颯砂＊＊｝ and ｛柊＊＊＊｝.
That means...)");
MsgDisp("主人公","Is this the hot spring club?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100220001_02_010");
MsgDisp("Sassa","Ooh, and with this, all the members are
here.");
MsgDisp("主人公","Eh, me too?");
ChMotion(2,2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100220001_05_010");
MsgDisp("Hiiragi","Yes. You're the vice president, just like
I am.");
MsgDisp("主人公","Hehe.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100220001_05_020");
MsgDisp("Hiiragi","Then, I shall share some with you too. It
was a gift from an audience member.
Natural hot spring salts you can enjoy
even at home.");
SEPlay("EV_SE_535");
SEWait();
ChMotion(2,0);
MsgDisp("主人公","This is from that famous hot spring...
Is that okay?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("F100220001_02_020");
MsgDisp("Sassa","Yes, with this you've fully joined our
club.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100220001_05_030");
MsgDisp("Hiiragi","Yes, we won't let you escape,
okay?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("F100220001_02_030");
MsgDisp("Sassa","Well, next time, let's discuss our
thoughts about these hot spring salts.");
MsgDisp("主人公","Hehe, understood.
｛柊＊＊＊｝, thank you.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100220001_05_040");
MsgDisp("Hiiragi","You are very welcome.
I'll see you then.");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(2,0,30);
MsgClose();
ChClose(5,0,30);
MsgDisp("主人公","(I guess I got carried away...
It might be fun, a hot spring club!)");
MsgClose();
ScrFadeOut(0);
