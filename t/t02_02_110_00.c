BGOpen("ex170",0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("T020211000_02_000");
MsgDisp("Sassa?","｛主人公｝, wait.");
SEPlay("EV_SE_872",0.5);
Wait(46,0);
ChOpen(2,254,7,4,0,#1,#1,0,0);
MsgDisp("主人公","Eh...
｛颯砂＊＊｝?");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("T020211000_02_010");
MsgDisp("Sassa","I want you to come with me.");
MsgDisp("主人公","W-What's wrong?");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020211000_02_020");
MsgDisp("Sassa","Sorry, I'll take you there.");
SEPlay("EV_SE_504");
Wait(30,1);
MsgDisp("主人公","Eh...?");
MsgClose();
ScrFadeOut(0);
ChClose(2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc613",0);
ScrFadeIn(0);
MsgDisp("主人公","This is the track-and-field club's ground.");
VoicePlay("T020211000_02_030");
MsgDisp("Sassa","Ah, how pathetic.
I'm pulling you into my territory...
... But I want you to listen to me here.");
MsgClose();
ScrFadeOut(0,1);
MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ChOpen(2,254,7,4,0,#1,#1,0,0);
BGMPlay("BGM_C02_SASSA_KOKU",0.01);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝...?");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020211000_02_040");
MsgDisp("Sassa","I've been running for a long time.
Ever since I started track and field in
elementary school.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("T020211000_02_050");
MsgDisp("Sassa","Since then, no matter what the competition
was, I never lost to anyone——");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("T020211000_02_060");
MsgDisp("Sassa","That's a nasty thing to say. But the truth
is, I was a nasty guy. I was an idiot, or
rather an idiot when it came to athletics.");
MsgDisp("主人公","Eh...");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020211000_02_070");
MsgDisp("Sassa","But then when I entered high school, I was
no longer able to win all the events in
the octathlon.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020211000_02_080");
MsgDisp("Sassa","It's not a matter of winning or losing in
one event, but the total number of points.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020211000_02_090");
MsgDisp("Sassa","I know that, but I didn't listen to the
advice of my seniors and ended up getting
isolated.");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("T020211000_02_100");
MsgDisp("Sassa","...But outside of athletics, I'm having
fun and laughing with my friends...");
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("T020211000_02_110");
MsgDisp("Sassa","I was beginning to lose track of which
side was the true me.");
MsgDisp("主人公","｛颯砂＊＊｝...");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020211000_02_120");
MsgDisp("Sassa","But you, treated both sides of me equally.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020211000_02_130");
MsgDisp("Sassa","...Do you remember running with me?");
MsgDisp("主人公","Yes");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020211000_02_140");
MsgDisp("Sassa","The time I spent running alongside you,
having normal conversations that was the
only time——");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020211000_02_150");
MsgDisp("Sassa","The only time both sides of me; the
annoying track-and-field fanatic and that
regular high school student overlapped");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020211000_02_160");
MsgDisp("Sassa","From then on, I naturally became friends
with my seniors and the other members of
the track and field club.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020211000_02_170");
MsgDisp("Sassa","I can't thank you enough.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020211000_02_180");
MsgDisp("Sassa","So I gave up on the idea.
That if you went to someone else, it would
be your choice.");
MsgDisp("主人公","｛颯砂＊＊｝...");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("T020211000_02_190");
MsgDisp("Sassa","But it didn't work.
The times I ran alongside you will stay
within me——");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("T020211000_02_200");
MsgDisp("Sassa","Right here.
My feelings for you are so big... they
can't ever be buried.");
MsgDisp("主人公","!");
MsgClear();
ChClose(2);
SEPlay("EV_SE_628",0,0.7,0.4);
ChCustomLayout(2,5,0,-2.8);
Wait(60);
ChOpen(2,254,0,4,0,#1,#1,0,0,0,120);
VoiceEVSPlay(2);
VoicePlay("T020211000_02_210");
MsgDisp("Sassa","｛主人公｝, once more.
I want you to run with me once more.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020211000_02_220");
MsgDisp("Sassa","I love you.");
