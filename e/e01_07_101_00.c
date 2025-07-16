ChLayout(1);
BGOpen("ne100",1);
ScrFadeIn(0);
MsgDisp("主人公","(I think it's time to go home......)");
VoicePlay("E010710100_47_000");
MsgDisp("Clerk","Sensei, here's a bonus.");
MsgDisp("主人公","(......
Hm?
Sensei?)");
VoicePlay("E010710100_07_000");
MsgDisp("Mikage","Thank you as always.
In return, here are some vegetables.");
VoicePlay("E010710100_47_010");
MsgDisp("Clerk","Wow!
Your vegetables look delicious.");
VoicePlay("E010710100_07_010");
MsgDisp("Mikage","Looks and tastes great.
Same as you, onee-san.");
VoicePlay("E010710100_47_020");
MsgDisp("Clerk","Ah, I'm glad!
Thanks～!");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,255,0,0,0,10,#1,0,0);
VoicePlay("E010710100_07_020");
MsgDisp("Mikage","Oh.
There's a beautiful girl over here too.");
MsgDisp("主人公","Hello, ｛御影＊＊｝.
Are you a regular at that store?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("E010710100_07_030");
MsgDisp("Mikage","Oh, I often come here on my days off.
The food they sell there is delicious.");
MsgDisp("主人公","You live alone, right
｛御影＊＊｝?
Does it get lonely?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("E010710100_07_040");
MsgDisp("Mikage","There are a lot of beauties waiting for me
back at home.");
MsgDisp("主人公","I see.
I do remember you saying you have a lot of
plants.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010710100_07_050");
MsgDisp("Mikage","That's right.
See you, then.
Take care on your way home.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
MsgDisp("主人公","(Amazing......
｛御影＊＊｝'s home is full
of vegetables and plants!)");
MsgClose();
ScrFadeOut(0,0);
