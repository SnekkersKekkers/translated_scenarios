BGMPlay("BGM_PLACE_SHOP");
Wait(40,0);
BGOpen("sc720",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for waiting. Here is your
matcha and mitarashi dango～!");
MsgDisp("主人公","(Phew...... I didn't think this many
customers would come......)");
MsgClose();
ChOpen(31,254,0,0,0,0,#1,0,0);
VoicePlay("P033100000_31_000");
MsgDisp("Goro","So it's here......
The source of that appetite-stimulating
scent.");
MsgDisp("主人公","Ah, Goro-sensei!
Welcome.");
ChEye(31,3);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("P033100000_31_010");
MsgDisp("Goro","Oh my.
Your look, wearing that yukata,
is quite fresh～");
MsgDisp("主人公","Hehe, thank you very much.
This is a Japanese-style cafe.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
VoicePlay("P033100000_31_020");
MsgDisp("Goro","Hm, I see. Then I'll have to get
something you recommend.
Looking ・ forward ・ to ・ it♪");
MsgDisp("主人公","Understood!");
MsgClose();
ScrFadeOut(0);
