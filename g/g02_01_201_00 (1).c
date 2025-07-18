MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
VoicePlay("G020120100_01_000");
MsgDisp("Kazama","It takes a lot of courage to come here.");
MsgDisp("主人公","Huh?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020120100_01_010");
MsgDisp("Kazama","No, not 'Huh? '.
I'm talking about you.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120100_01_020");
MsgDisp("Kazama","You're all that I look at.
But I'm sure I've spied with my little eye
people who aren't me near you.");
MsgDisp("主人公","Um...");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120100_01_030");
MsgDisp("Kazama","...Sorry.
But I want to know how you feel, even just
a little.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020120100_01_040");
MsgDisp("Kazama","So, anyway, that might be why I brought
you here.");
MsgDisp("主人公","I like it here; it's pretty.");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,0,1);
VoicePlay("G020120100_01_050");
MsgDisp("Kazama","I've known that for a while.
You like pretty things, and you're always
looking for something fun to do.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120100_01_060");
MsgDisp("Kazama","Hah.
I'm a lowlife, taking advantage of those
feelings of yours to bring you here.");
MsgDisp("主人公","You're not a lowlife.");
ChEye(1,0);
ChMouth(1,4);
ChMotion(1,1);
VoicePlay("G020120100_01_070");
MsgDisp("Kazama","I know you better than anyone. So I don't
need to rely on weird things like 'hearing
how you really feel', but still.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120100_01_080");
MsgDisp("Kazama","I guess being at a slight disadvantage is
just the right handicap.");
MsgDisp("主人公","(I think ｛風真＊＊｝ is
worried about something...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
