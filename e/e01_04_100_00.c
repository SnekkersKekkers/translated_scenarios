BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","I think it's time to go home.
...Oh?");
MsgClose();
BGMPlay("BGM_C04_NANA_A",0.01);
ChNanaType(0);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
VoicePlay("E010410000_04_000");
MsgDisp("Nanatsumori","Ah.");
MsgDisp("主人公","Is ｛七ツ森＊｝ also
going home now?");
VoicePlay("E010410000_04_010");
MsgDisp("Nanatsumori","Yeah.");
MsgDisp("主人公","...Sniff sniff.
What a nice smell, and kind of sweet.
Like pancakes...");
ChEye(4,5);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010410000_04_020");
MsgDisp("Nanatsumori","Wow.
You got it.
Look here.");
MsgDisp("主人公","Wow, that's what it was?
That looks yummy～!");
ChEye(4,3);
ChMouth(4,3);
VoicePlay("E010410000_04_030");
MsgDisp("Nanatsumori","Earlier, I went to that food truck.
The one that sells pancakes you can eat
while walking.");
ChMotion(4,0,1);
VoicePlay("E010410000_04_040");
MsgDisp("Nanatsumori","They're easy to eat and taste good.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("E010410000_04_050");
MsgDisp("Nanatsumori","...Ah.");
MsgDisp("主人公","What's wrong?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("E010410000_04_060");
MsgDisp("Nanatsumori","Maybe you'd like to try it too?
Apparently if you buy two or more, the
toppings are free.");
MsgDisp("主人公","That sounds good, let's go!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("E010410000_04_070");
MsgDisp("Nanatsumori","That's it.
This way!");
MsgDisp("主人公","Coming!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
BGMStop();
ChClose(4,0,30);
MsgClose();
ScrFadeOut(0,0);
