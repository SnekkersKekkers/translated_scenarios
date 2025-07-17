MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChEye(1,4);
VoicePlay("G020140001_01_000");
MsgDisp("Kazama","When we come here, I tend to randomly
remember things from our past.");
MsgDisp("主人公","Like what?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140001_01_010");
MsgDisp("Kazama","Like your little red backpack or the green
and yellow traffic safety ribbons on your
hat.");
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,#1);
VoicePlay("G020140001_01_020");
MsgDisp("Kazama","Or the treats we got from the old lady at
the tobacco store when we would go home
together.");
MsgDisp("主人公","I'm sorry, I don't really remember those
things...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140001_01_030");
MsgDisp("Kazama","It's fine.
The most I get is the image popping into
my head too.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140001_01_040");
MsgDisp("Kazama","Remembering things like that, even a
little bit, makes me happy since it helps
make up for our ten years apart.");
MsgDisp("主人公","We'll be able to make lots of memories in
our three years at Haba High.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140001_01_050");
MsgDisp("Kazama","Yeah.
And I want a lot of them, from the idiotic
to the wonderful.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140001_01_060");
MsgDisp("Kazama","It's nothing but intense personalities,
like Mikage-sensei and Sassa, so I
probably won't have to worry about the
idiotic ones.");
MsgDisp("主人公","Hahah, maybe.");
ChMotion(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
VoiceEVSPlay(1);
VoicePlay("G020140001_01_070");
MsgDisp("Kazama","So, ｛主人公｝, I'm
counting on you for the wonderful ones.");
MsgDisp("主人公","Huh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140001_01_080");
MsgDisp("Kazama","Oh, of course I'm okay with idiotic ones
too.
As long as I'm making memories with you.");
MsgDisp("主人公","(I hope I can make a lot of memories with
｛風真＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
