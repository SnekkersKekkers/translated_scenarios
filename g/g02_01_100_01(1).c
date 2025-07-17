MsgClose();
ChOpen(1,255,1,4,2,0,#1,0,0);
Wait(12,0);
ChEye(1,0);
VoicePlay("G020110001_01_000");
MsgDisp("Kazama","... This place, it's the habitat of
fireflies, right?
Doesn't it somewhat smell like roses?");
MsgDisp("主人公","Hmmm...?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020110001_01_010");
MsgDisp("Kazama","That's right...
You're not the type associated with the
scent of roses");
MsgDisp("主人公","Hey.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020110001_01_020");
MsgDisp("Kazama","Even if you say 'hey', in my mind, your
scent has always been like freshly baked
cookies.");
MsgDisp("主人公","Cookies...?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020110001_01_030");
MsgDisp("Kazama","Do you dislike it?
When you were little, you used to smell
like cookies, and I really liked it.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("G020110001_01_040");
MsgDisp("Kazama","That's why...even in England I would
ask for cookies to be baked for me...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
ChCheek(1,5);
VoicePlay("G020110001_01_050");
MsgDisp("Kazama","It's uncool, but I'm telling the truth.");
MsgDisp("主人公","｛風真＊＊｝...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("G020110001_01_060");
MsgDisp("Kazama","Then, before I knew it, I started to like
all kinds of baked sweets.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020110001_01_070");
MsgDisp("Kazama","It's not just because I love sweets; it's
because of my memories of you.");
MsgDisp("主人公","From now on, I'll make lots of cookies for
you.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020110001_01_080");
MsgDisp("Kazama","Please don't.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020110001_01_090");
MsgDisp("Kazama","... Huh?
The scent of roses is gone.");
MsgDisp("主人公","(To think that the reason
｛風真＊＊｝ likes sweets is
because of me... It's somewhat
embarrassing.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
