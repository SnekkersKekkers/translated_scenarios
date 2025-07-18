MsgClose();
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("G020410301_04_000");
MsgDisp("Nanatsumori","The firefly lights are so warm, huh.");
MsgDisp("主人公","You're right.
Warm, cozy colors in the sky...
Ah.");
MsgDisp("主人公","｛七ツ森＊｝, it looks
like the lights from the equipment room!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("G020410301_04_010");
MsgDisp("Nanatsumori","Oh, nice memory.
There were a lot of powerful lights and
stuff.");
ChMotion(4,0,1);
VoicePlay("G020410301_04_020");
MsgDisp("Nanatsumori","At night, isn't it as sparkly and
beautiful as the fireflies here?");
MsgDisp("主人公","That's true!
I definitely can kind of see that.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("G020410301_04_030");
MsgDisp("Nanatsumori","At night?");
MsgDisp("主人公","Ah...oh yeah.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020410301_04_040");
MsgDisp("Nanatsumori","Oh man...you're a bit gullible...
Are you sure you're being careful?");
MsgDisp("主人公","Y-Yeah.");
ChEye(4,0);
ChMouth(4,0);
ChMouthOpenLevel(4,0);
VoicePlay("G020410301_04_050");
MsgDisp("Nanatsumori","......");
ChMotion(4,1,1);
ChMouthOpenLevel(4,#1);
VoicePlay("G020410301_04_060");
MsgDisp("Nanatsumori","Hey, do you really see me as a man?");
MsgDisp("主人公","Huh?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("G020410301_04_070");
MsgDisp("Nanatsumori","That's it, huh?
Gah.
If it's just that, I'll forgive you...");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020410301_04_080");
MsgDisp("Nanatsumori","Well, that's fine.
You can visit my room again.
I'll get you a nice cake.");
MsgDisp("主人公","(Yay! But, I wonder what
｛七ツ森＊｝ meant by
saying I don't see him as a man...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
