MsgClose();
ChOpen(2,255,4,0,2,#1,#1,0,0);
VoicePlay("G020210200_02_000");
MsgDisp("Sassa","...When you see a view like this, it
creates a nice atmosphere, right?");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020210200_02_010");
MsgDisp("Sassa","You know, in general.
Like a beautiful night view?
That's kind of the usual thing.");
MsgDisp("主人公","I think it's beautiful.
But a nice atmosphere...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("G020210200_02_020");
MsgDisp("Sassa","Speaking of which, what does a nice
atmosphere feel like?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020210200_02_030");
MsgDisp("Sassa","I know I should say that myself but.");
MsgDisp("主人公","Yeah, it's tough.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
VoicePlay("G020210200_02_040");
MsgDisp("Sassa","I'm in trouble...
I had planned for us to have a nice
atmosphere here tonight.");
MsgDisp("主人公","Hehe, planned?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020210200_02_050");
MsgDisp("Sassa","Yeah.
I've been thinking about it quite a lot
since yesterday.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020210200_02_060");
MsgDisp("Sassa","Well, as long as you're smiling, that's
all that matters.");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("G020210200_02_070");
MsgDisp("Sassa","So, let's save the nice atmosphere for
later.");
ChEye(2,0);
ChEyeOpenLevel(2,10);
MsgDisp("主人公","(I'm not sure about a nice atmosphere...
but being with ｛颯砂＊＊｝
always makes me happy.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
