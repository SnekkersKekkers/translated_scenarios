MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
VoicePlay("G020110103_01_000");
MsgDisp("Kazama","You know, doesn't it feel like the
fireflies are giving us their blessing?");
MsgDisp("主人公","Yeah, there're so many around you,
｛風真＊＊｝.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
VoicePlay("G020110103_01_010");
MsgDisp("Kazama","And around you too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110103_01_020");
MsgDisp("Kazama","You think it's the same with them?
......Nanatsumori and Honda, I mean.");
MsgDisp("主人公","Huh?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020110103_01_030");
MsgDisp("Kazama","Guys don't really talk about that kinda
stuff......But I think they're looking out
for us even if they don't say anything.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110103_01_040");
MsgDisp("Kazama","Like, Nanatsumori keeps telling me about
trendy date spots.");
ChMotion(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("G020110103_01_050");
MsgDisp("Kazama","And I don't really get Honda, but he helps
me out based on how he sees the world.");
MsgDisp("主人公","So that special kind of friendship between
boys.
That's good to hear.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("G020110103_01_060");
MsgDisp("Kazama","Friendship......is that what it is?
I don't think that's quite right.
It's a pretty tight balancing act.");
MsgDisp("主人公","Balancing act?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020110103_01_070");
MsgDisp("Kazama","And there you go again.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020110103_01_080");
MsgDisp("Kazama","Listen up. That balancing act all depends
on your tiniest movements. You understand?");
MsgDisp("主人公","Wait, me?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110103_01_090");
MsgDisp("Kazama","So please don't upset the balance we have
right now.
I'm serious.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110103_01_100");
MsgDisp("Kazama","......Of course, even if it all comes
crashing down, I'd make my way back to you
right away.");
MsgDisp("主人公","(What is ｛風真＊＊｝ talking about?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
