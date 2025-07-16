MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020120301_01_000");
MsgDisp("Kazama","Do you think popular fireflies are
surrounded by a bunch of other fireflies,
just like with people?");
MsgDisp("主人公","Yeah, maybe they are.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120301_01_010");
MsgDisp("Kazama","Why are you responding like it's got
nothing to do with you?
I'm actually talking about you.");
MsgDisp("主人公","Huh?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120301_01_020");
MsgDisp("Kazama","You need to be a bit more self-aware.
Do you understand just how magnetic a
person you are?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020120301_01_030");
MsgDisp("Kazama","Put yourself in my shoes......");
MsgDisp("主人公","But you're the one who's surrounded by all
those girls at school and at Simon,
｛風真＊＊｝");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020120301_01_040");
MsgDisp("Kazama","Oh?
So that's how you see it.
That's a bit reassuring.");
MsgDisp("主人公","C'mon, knock it off.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020120301_01_050");
MsgDisp("Kazama","Sorry.
And what I have going on is a bit
different.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020120301_01_060");
MsgDisp("Kazama","I'm glad work customers have a high
opinion of me. But, at school, it's my
family and stuff they're interested in.
It's a nuisance.");
MsgDisp("主人公","I don't think that's it.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,2);
VoicePlay("G020120301_01_070");
MsgDisp("Kazama","You're the only one whose opinion I care
about at school.
I'm not interested in anyone else.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020120301_01_080");
MsgDisp("Kazama","......But what you have is something
totally different. Everyone like you, no
strings attached. Your family doesn't
matter.");
MsgDisp("主人公","That's not true......
But thanks.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120301_01_090");
MsgDisp("Kazama","(sigh) It doesn't look like my worries are
gonna end any time soon.");
MsgDisp("主人公","You're liked by both boys and girls, and
you're popular with the elderly too,
｛風真＊＊｝, so you're really
amazing.");
ChMotion(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
VoicePlay("G020120301_01_100");
MsgDisp("Kazama","You've totally missed my point, but
thanks.");
MsgDisp("主人公","(Does ｛風真＊＊｝ not realize
how popular he is......?");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
