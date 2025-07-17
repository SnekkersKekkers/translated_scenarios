MsgClose();
ChOpen(1,255,1,4,2,0,#1,0,0);
Wait(12,0);
ChEye(1,0);
VoicePlay("G020110001_01_000");
MsgDisp("Kazama","... This is the Home of Fireflies,
right?
Doesn't it kinda smell like roses?");
MsgDisp("主人公","Huh...?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110001_01_010");
MsgDisp("Kazama","Yeah, that doesn't make sense...
And you're not really the roses type.");
MsgDisp("主人公","Rude.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020110001_01_020");
MsgDisp("Kazama","\"Rude\" or not, in my head, you've always
smelled like fresh-baked cookies.");
MsgDisp("主人公","Cookies...?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020110001_01_030");
MsgDisp("Kazama","Not a fan?
I liked how you smelled like cookies when
we were kids.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("G020110001_01_040");
MsgDisp("Kazama","It's why...even in the UK, I'd ask my
mom to make cookies all the time...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
ChCheek(1,5);
VoicePlay("G020110001_01_050");
MsgDisp("Kazama","It's lame, but it's true.");
MsgDisp("主人公","｛風真＊＊｝...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("G020110001_01_060");
MsgDisp("Kazama","And thanks to that, I ended up liking
baked sweets in general.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110001_01_070");
MsgDisp("Kazama","I didn't start off liking sweets.
My memories of you made me like this.");
MsgDisp("主人公","Then I'll make you lots of cookies.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110001_01_080");
MsgDisp("Kazama","I'm holding you to that.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020110001_01_090");
MsgDisp("Kazama","... Huh?
It doesn't smell like roses anymore.");
MsgDisp("主人公","(I can't belive I'm the reason
｛風真＊＊｝ likes sweets...
That's kind of embarrassing.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
