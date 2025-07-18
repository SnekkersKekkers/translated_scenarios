BGOpen("sc130",1);
ScrFadeIn(0);
MsgDisp("主人公","(The weather is really nice today.
I'll go for a little walk before I go
home.)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf000",1);
ScrFadeIn(0);
MsgDisp("主人公","(I walked around a lot, maybe I should
start to head back now?)");
SEPlay("EV_SE_511",0,0.9);
Wait(30,0);
VoicePlay("D200000000_34_000");
MsgDisp("Man","Oy, over there!
Isn't that Goro Hanatsubaki?");
VoicePlay("D200000000_46_000");
MsgDisp("Woman","You're right!
It's the world-renowned fashion icon,
Goro-sensei!");
MsgDisp("主人公","(Eh, Goro Hanatsubaki...
Is such a famous person really here?)");
SEStop("EV_SE_511",2);
VoicePlay("D200000000_31_000");
MsgDisp("Goro?","I・found・you・.
You over there, a minute♪");
MsgDisp("主人公","...Eh?
Me?");
MsgClose();
BGMPlay("BGM_C31_GORO_A",0.01);
ChOpen(31,254,3,2,2,#1,#1,0,0);
VoicePlay("D200000000_31_010");
MsgDisp("Goro?","Yes, that's right.
Y・O・U.
Come over here for a minute.");
MsgDisp("主人公","Ah...
Sure.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D200000000_31_020");
MsgDisp("Goro?","Can you close your eyes?");
MsgDisp("主人公","Uhm...");
ChEye(31,1);
ChMouth(31,1);
ChMotion(31,1);
VoicePlay("D200000000_31_030");
MsgDisp("Goro?","I'm telling you to close your eyes∈");
MsgDisp("主人公","Y-Yes!");
ScrFadeOut(3,30);
VoicePlay("D200000000_31_040");
MsgDisp("Goro?","...Hmm, I see. Eh...Oh. Oh my. This
hairpin is...Hehe.");
VoicePlay("D200000000_31_050");
MsgDisp("Goro?","...Okay, that's enough.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
ScrFadeIn(4,30);
MsgDisp("主人公","U-Uhm...
You're the world famous fashion designer,
Goro Hanatsubaki, right?");
ChEye(31,4);
ChMouth(31,4);
ChMotion(31,2);
VoicePlay("D200000000_31_060");
MsgDisp("Goro","Hello♪
But right now I'm Goro Hanatsubaki,
special advisor of Habatcher!");
MsgDisp("主人公","Uhm...Habatcher? That's Habataki City's
information magazine \"Habataki Watcher \",
right?...");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,3);
VoicePlay("D200000000_31_070");
MsgDisp("Goro","That's right.
And starting today, you're a new member of
Habatcher's editorial team.");
MsgDisp("主人公","Eh?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D200000000_31_080");
MsgDisp("Goro","Hehe, it's a busy job, you know?
Finding all the rough diamonds in Habataki
City.");
MsgDisp("主人公","Rough Diamonds...?");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,0);
VoicePlay("D200000000_31_090");
MsgDisp("Goro","That's right. Young people with shimmering
talent hidden within...Beautiful Diamonds
in the Rough!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("D200000000_31_100");
MsgDisp("Goro","You are the one who will take those
diamonds and polish them into a wonderful
and shining person♪");
MsgDisp("主人公","Ehh∋
I'm not sure if I'm the kind of person who
can do that——");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,2);
VoicePlay("D200000000_31_110");
MsgDisp("Goro","That self-doubt is a big no-no.
You can do it.
Just think of it as a part-time job.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D200000000_31_120");
MsgDisp("Goro","Whenever you're in the mood, just walk
around Habataki City and then write a nice
article about it.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("D200000000_31_130");
MsgDisp("Goro","Good luck then.
Adieu♪");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(31);
MsgDisp("主人公","(H-He's gone...)");
MsgDisp("主人公","(I guess I'm a member of Habataki's
Editorial Team now...?
What should I do?)");
MsgClose();
ScrFadeOut(0,0);
