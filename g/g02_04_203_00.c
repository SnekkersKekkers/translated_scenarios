MsgClose();
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("G020420300_04_000");
MsgDisp("Nanatsumori","Ah...");
MsgDisp("主人公","Hm?");
ChMouth(4,4);
ChMotion(4,1,1);
ChEyeOpenLevel(4,10);
VoicePlay("G020420300_04_010");
MsgDisp("Nanatsumori","Your hair.
A firefly just landed there.");
MsgDisp("主人公","Huh.");
ChMouth(4,3);
ChEyeOpenLevel(4,#1);
VoicePlay("G020420300_04_020");
MsgDisp("Nanatsumori","It's like a glittery hair accessory,
right?
...It's pretty.");
MsgDisp("主人公","Really?
I would love to see it.");
ChMotion(4,0,1);
VoicePlay("G020420300_04_030");
MsgDisp("Nanatsumori","Should I take a photo then?
Give me a second.");
MsgDisp("主人公","Okay!");
ChMouth(4,0);
VoicePlay("G020420300_04_040");
MsgDisp("Nanatsumori","Ah!");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("G020420300_04_050");
MsgDisp("Nanatsumori","A-Ah, it just flew away.
It got out of your hair.");
MsgDisp("主人公","O-Oh...");
ChEye(4,3);
ChMouth(4,4);
VoicePlay("G020420300_04_060");
MsgDisp("Nanatsumori","...Pew!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020420300_04_070");
MsgDisp("Nanatsumori","Even in a romantic place like this, you're
the same as usual.");
MsgDisp("主人公","Really?");
VoicePlay("G020420300_04_080");
MsgDisp("Nanatsumori","Really.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("G020420300_04_090");
MsgDisp("Nanatsumori","I... I'm really falling for the magic of
this place.");
MsgDisp("主人公","(The magic of the fireflies habitat?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
