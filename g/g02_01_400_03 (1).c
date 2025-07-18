MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_000");
MsgDisp("Kazama","So, hey, we've got some driftwood on
display at my grandpa's store.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020140003_01_010");
MsgDisp("Kazama","I picked it up at the beach with Grandpa a
long time ago.
And, obviously, it's not for sale.");
MsgDisp("主人公","Okay.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_020");
MsgDisp("Kazama","But apparently, people have shown up
wanting that driftwood.
At a pretty high price too.");
MsgDisp("主人公","Really?
That's amazing!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("G020140003_01_030");
MsgDisp("Kazama","But Grandpa's not sure what to do. If it
were one person, we could just give it as
a gift, but he said there was a couple of
them.");
MsgDisp("主人公","What∋
You're going to give it to them?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020140003_01_040");
MsgDisp("Kazama","Hold it, why are you acting like you want
it?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020140003_01_050");
MsgDisp("Kazama","...But, seriously, of course we will.
It's just driftwood that I picked up at
the beach when I was a kid.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("G020140003_01_060");
MsgDisp("Kazama","But I wanted to know why people wanted it
so I went and checked out the driftwood a
little while ago.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_070");
MsgDisp("Kazama","And when I did, I noticed a slight
fragrance. You know about fragrant woods?
The quality ones sell at crazy prices.");
MsgDisp("主人公","Do you mean...");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020140003_01_080");
MsgDisp("Kazama","Yep.
It's nothing fancy, but it's definitely a
fragrant wood.");
MsgDisp("主人公","That's amazing! So you've had a really
discerning eye since you were little,
｛風真＊＊｝.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_090");
MsgDisp("Kazama","It's not like that.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140003_01_100");
MsgDisp("Kazama","And it says 'elephant' on the backside in
terrible handwriting.");
MsgDisp("主人公","Elephant...
Why?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("G020140003_01_110");
MsgDisp("Kazama","'cause it was shaped like an elephant with
a long nose.");
MsgDisp("主人公","Hahah, that's cute.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
VoicePlay("G020140003_01_120");
MsgDisp("Kazama","So you understand why we can't sell it at
a high price, yeah?");
MsgDisp("主人公","(I'm sure that ｛風真＊＊｝ has
had a good eye for things since he was
little...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
