MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020120300_01_000");
MsgDisp("Kazama","I guess fireflies come in different types
too, like ones that fly elegantly and ones
that are in a rush.");
MsgDisp("主人公","Yeah, the way they shine and the color of
their lights are a bit different too.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("G020120300_01_010");
MsgDisp("Kazama","So which do you prefer?");
MsgDisp("主人公","Which firefly?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
VoicePlay("G020120300_01_020");
MsgDisp("Kazama","Of course not. I mean, you gotta have a
preference, right? You know......when it
comes to fashion.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
VoicePlay("G020120300_01_030");
MsgDisp("Kazama","What am I even saying......");
MsgDisp("主人公","So men's fashion?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020120300_01_040");
MsgDisp("Kazama","That's right. I figured your preferences
would be worth taking into consideration.
But just consideration, okay?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020120300_01_050");
MsgDisp("Kazama","So is it sporty clothes? Or the wild
stuff?");
MsgDisp("主人公","Mmmm, I like the clothes you usually wear,
｛風真＊＊｝.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020120300_01_060");
MsgDisp("Kazama","Yes! That answer gets a perfect 100!");
MsgDisp("主人公","Hahah, you look really good in an apron
after all, ｛風真＊＊｝.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3,1);
VoicePlay("G020120300_01_070");
MsgDisp("Kazama","Hold it, that's what you meant∋ That's
just the uniform for Simon.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020120300_01_080");
MsgDisp("Kazama","Well, I guess that's fine, since it's just
like you to say that.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120300_01_090");
MsgDisp("Kazama","But you better get ready. I'm going to
start wearing aprons in all sorts of
colors to our dates from now on.");
MsgDisp("主人公","(A colorful ｛風真＊＊｝ might be a bit
like these fireflies......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
