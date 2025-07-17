MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_000");
MsgDisp("Kazama","Hey, you know my Grandpa's shop has
driftwood on display.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020140003_01_010");
MsgDisp("Kazama","A long time ago, I would gather them for
my Grandpa.
Of course, it wasn't to sell.");
MsgDisp("主人公","Yeah");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_020");
MsgDisp("Kazama","But recently, someone appeared wanting us
to hand it over.
And for quite a good price too.");
MsgDisp("主人公","Ehhh, that's amazing, huh!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("G020140003_01_030");
MsgDisp("Kazama","My grandpa is troubled.
He'd give it as a gift if it were just one
person, but there's quite a few of them.");
MsgDisp("主人公","Ehhh∋
Is he going to give it away?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020140003_01_040");
MsgDisp("Kazama","Hey, why are you being greedy?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020140003_01_050");
MsgDisp("Kazama","... Geez, does it need to be said?
It's a piece of driftwood I picked up as a
kid.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("G020140003_01_060");
MsgDisp("Kazama","But I noticed something when I looked at
that driftwood.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_070");
MsgDisp("Kazama","Well, it had a bit of a smell to it.
You know the smell of fragrant wood?
The high class ones fetch a high price.");
MsgDisp("主人公","Could it be...");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020140003_01_080");
MsgDisp("Kazama","Yeah.
It's not a big deal, but I'm pretty sure
it's fragrant wood.");
MsgDisp("主人公","Amazing! Since he was young,
｛風真＊＊｝ has had a great
discerning eye.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_090");
MsgDisp("Kazama","That's not true.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_100");
MsgDisp("Kazama","On the back of the driftwood, there's a
badly scrawled character of the word
'elephant'.");
MsgDisp("主人公","Ele...phant?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("G020140003_01_110");
MsgDisp("Kazama","That driftwood had a long nose like an
elephant.");
MsgDisp("主人公","Hehe, that's cute.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
VoicePlay("G020140003_01_120");
MsgDisp("Kazama","It doesn't seem like you can sell
something like that for a high price?");
MsgDisp("主人公","(｛風真＊＊｝ has had a good eye for things
since he was little huh...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
