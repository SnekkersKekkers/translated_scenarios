BGOpen("sc724",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year we're doing an organic cafe.
It's the culmination of the Gardening
club's efforts...)");
MsgClose();
ChOpen(31,254,0,3,3,#1,#1,0,0);
VoicePlay("P633100002_31_000");
MsgDisp("Goro","Well, it's you.
This is a nice terrace, isn't it?");
MsgDisp("主人公","Goro-sensei, welcome!
This is Haba High's gardening 
club's true capabilities.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("P633100002_31_010");
MsgDisp("Goro","Hm?
Then, I'll get on some of that sincerity.
Bring it to me please!");
MsgDisp("主人公","Certainly!");
MsgClose();
ScrFadeOut(0);
