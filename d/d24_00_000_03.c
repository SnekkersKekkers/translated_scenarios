BGOpen("ex070",0);
ScrFadeIn(0);
SEPlay("EV_SE_080");
Wait(20,0);
MsgDisp("主人公","(Your hard work as an employee of
Habacha's Editorial Department has been
recognized. As a result, your \"Journalist
Level\" has increased!)");
MsgClose();
ChOpen(31,254,2,0,0,#1,#1,0,0);
VoicePlay("D230000003_31_000");
MsgDisp("Goro","Just like I expected.
Thanks to you, all those diamonds in the
rough are starting to shine.");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,3);
VoicePlay("D230000003_31_010");
MsgDisp("Goro","Today you are one of them.
A beautiful, shining diamond.
You've completed your Journalist Level.");
MsgDisp("主人公","Goro-sensei......
Thank you so much!");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,1);
VoicePlay("D240000003_45_000");
MsgDisp("Shirahane Mayo","Congratulations! You're now a full-fledged
reporter.");
VoicePlay("D240000003_45_010");
MsgDisp("Shirahane Mayo","That's right! If you're okay with it,
would you like to continue working at our
company in the future?");
VoicePlay("D240000003_45_020");
MsgDisp("Shirahane Mayo","With you, Habacha will become even
more......No, with you here, Habataki City
will become even more lively.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
VoicePlay("D240000003_41_030");
MsgDisp("Tanaka Shin","I'd welcome that idea too!
Please give it some thought!");
MsgDisp("主人公","(Do I want to work in Habacha's Editorial
Department......I guess I should think
about it a bit more?)");
MsgClose();
ScrFadeOut(0,0);
