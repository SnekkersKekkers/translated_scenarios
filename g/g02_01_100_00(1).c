MsgClose();
ChOpen(1,255,1,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020110000_01_000");
MsgDisp("Kazama","It's amazing, huh...
It's somewhat dream-like...");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(16,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("G020110000_01_010");
MsgDisp("Kazama","...You know I often had dreams about you,
since a long time ago.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G020110000_01_020");
MsgDisp("Kazama","It's in a garden where lot's of flowers
are blooming, you were hanging out with
some guys I didn't know.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110000_01_030");
MsgDisp("Kazama","I would run towards you, but I couldn't
get closer at all. I always had these
dreams when I was in England.");
MsgDisp("主人公","It wasn't a fun dream huh?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110000_01_040");
MsgDisp("Kazama","It's not like that either. In the dream I
was at least able to see you. I was really
happy.");
MsgDisp("主人公","｛風真＊＊｝...");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110000_01_050");
MsgDisp("Kazama","When I came back here, I saw the same
dream. But this time, I was able to
properly enter the garden.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("G020110000_01_060");
MsgDisp("Kazama","I wasn't even able to get close before.");
MsgDisp("主人公","I see.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110000_01_070");
MsgDisp("Kazama","...But somehow, we were still the same as
when we were both small elementary school
students.");
MsgDisp("主人公","Hehe");
MsgDisp("主人公","(｛風真＊＊｝, has dreams about me...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
