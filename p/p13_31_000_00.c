BGOpen("sc721",0);
BGMPlay("BGM_PLACE_SHOP");
Wait(45,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Seems like our attraction 'Find Molly in
the giant maze' is attracting a lot of
attention more and more people are
gathering...)");
MsgClose();
ChOpen(31,254,0,0,0,#1,#1,0,0);
VoicePlay("P133100000_31_000");
MsgDisp("Goro","Ara, cow.");
MsgDisp("主人公","Ah, Goro-sensei!
You went to the trouble of coming to the
school festival?");
ChEye(31,0);
ChMouth(31,3);
ChMotion(31,3);
VoicePlay("P133100000_31_010");
MsgDisp("Goro","Well yeah. This majestic sight, it's hard
to ignore... Pardon the intrusion a bit!");
MsgDisp("主人公","Yes, entry for one!");
MsgClose();
ScrFadeOut(0);
