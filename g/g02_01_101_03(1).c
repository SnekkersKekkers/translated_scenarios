MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
VoicePlay("G020110103_01_000");
MsgDisp("Kazama","These things look like they're blessing
us, don't you think?");
MsgDisp("主人公","Yeah, there are many fireflies around you,
｛風真＊＊｝.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
VoicePlay("G020110103_01_010");
MsgDisp("Kazama","They're a lot around you too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110103_01_020");
MsgDisp("Kazama","I wonder if Nanatsumori and Honda also
felt the same thing.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020110103_01_030");
MsgDisp("Kazama","When it's between men, we don't talk that
way. It's hard to say, but I think they're
just being considerate.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110103_01_040");
MsgDisp("Kazama","Well, Nanatsumori introduced me to some
dating spots that are popular.");
ChMotion(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("G020110103_01_050");
MsgDisp("Kazama","As for Honda, I'm not really sure.
But he gives me hints with his own truths.");
MsgDisp("主人公","Friendship between boys seems nice.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("G020110103_01_060");
MsgDisp("Kazama","Friendship?
It feels a little different though.
I'd say it's a subtle balance.");
MsgDisp("主人公","Balance?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020110103_01_070");
MsgDisp("Kazama","It's out.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020110103_01_080");
MsgDisp("Kazama","That balance depends on how you measure it
I guess.
Do you understand?");
MsgDisp("主人公","Eh, me?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110103_01_090");
MsgDisp("Kazama","Please, don't break today's balance.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110103_01_100");
MsgDisp("Kazama","Well, even if the balance is off, I'll be
right back next to you.");
MsgDisp("主人公","(I wonder what ｛風真＊＊｝ is
talking about.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
