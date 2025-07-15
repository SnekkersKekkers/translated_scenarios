BGOpen("ho100",0);
ScrFadeIn(0);
MsgDisp("主人公","I'm leaving!");
SEPlay("EV_SE_DOOR_022");
SEWait();
MsgClose();
SEPlay("EV_SE_DOOR_023");
ScrFadeOut(0,0);
SEWait();
BGOpen("ho000",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ah～ What a nice morning. I get the
feeling that a lot of good things will
happen in my high school life!)");
MsgDisp("主人公","(\"Ryota\"-kun came over yesterday, but I
wasn't home to see him...
Wonder how he's changed?)");
MsgDisp("主人公","(He might look different now, but I bet
he's still the same smart, lively boy I
knew. )");
SEPlay("EV_SE_FOOT_WALK_KEEP_ALONE",0,0.6);
MsgClose();
ScrFadeOut(0,0);
SEWait();
BGOpen("sc010",0);
ScrFadeIn(0);
MsgDisp("主人公","(It's the same road I always walked back
in elementary school, how nostalgic.
It feels kind of strange......)");
Wait(30,1);
EfctOpen(6);
MsgDisp("主人公","(Whoa—! The sun's so bright!)");
MsgClose();
ScrFadeOut(0,1);
EfctClose();
Wait(40,1);
VoicePlay("A020100000_01_000");
MsgDisp("Kazama?","I know it's been a long time since we last
saw each other, but, a frown, really?");
StlOpen("ev_01_01");
StlEye(1,0);
StlMouth(1,0);
EfctOpen(6);
BGMPlay("BGM_C01_RYOUTA_I",0.01);
ScrFadeIn(0);
MsgDisp("主人公","∋ Wait... no way... Ryota!? Er,
｛風真＊＊｝?");
StlEye(1,1);
StlMouth(1,1);
Wait(30,1);
MsgClose();
ScrFadeOut(0,0);
EfctClose();
StlClose();
BGOpen("sc010",0); 
ChLayout(1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
MsgClose();
ChOpen(1,254,0,2,3,0,#1,0,0);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("A020100000_01_010");
MsgDisp("Kazama","Yup, that's me.
Ka-za-ma here.
We used to play together a lot, remember?");
ChMotion(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("A020100000_01_020");
MsgDisp("Kazama","...Well, that's just like you.
Guess I got my hopes up.
That's on me.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("A020100000_01_030");
MsgDisp("Kazama","Anyway... It's been 9 years. Glad to see
you're still lively.");
MsgDisp("主人公","It's really been such a long time!");
MsgDisp("主人公","｛風真＊＊｝, you've grown up so much!
You're nothing like the elementary school
boy I saw in my dream last night!");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("A020100000_01_040");
MsgDisp("Kazama","...Wait.
You dream about me?");
MsgDisp("主人公","Yes, just this morning!
Strange, huh?");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,4);
VoicePlay("A020100000_01_050");
MsgDisp("Kazama","...N-Not really.
It's not that weird.");
MsgDisp("主人公","That uniform...
Wait— are you going to Habataki High
School too?");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("A020100000_01_060");
MsgDisp("Kazama","Yeah. I didn't expect this either. I told
your mom yesterday. Did she not tell you?");
MsgDisp("主人公","Sorry ｛風真＊＊｝, I was so surprised to
hear that you came back, maybe I wasn't
listening all that well...");
MsgDisp("主人公","Same school again, huh?
Feels like we're back in elementary
school.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("A020100000_01_070");
MsgDisp("Kazama","Yeah. ...We should get going. This
reunion's dragging out.");
MsgDisp("主人公","Oh, true!
Let's go!");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
BGMStop(2);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
Wait(60,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex240",0);
NSSOpen(1,254,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("A020100000_01_071");
BGMVol(0.5,0.5);
MsgDisp("Kazama","In first grade, we used to walk up this
same street to get to school together,
remember?");
MsgDisp("主人公","Right......
......Oh, I forgot something!");
NSSEye(1,3);
NSSMouth(1,2);
VoicePlay("A020100000_01_080");
MsgDisp("Kazama","What is it?");
MsgDisp("主人公","Welcome back.");
NSSEye(1,6);
NSSMouth(1,3);
NSSCheek(1,7);
VoicePlay("A020100000_01_090");
MsgDisp("Kazama","It's good to be back......");
NSSEyeOpenLevel(1,0);
Wait(20,0);
NSSEye(1,0);
NSSCheek(1,0);
MsgDisp("主人公","Sorry about yesterday.
You took the time to stop by but I wasn't
home.");
NSSEye(1,4);
NSSMouth(1,0);
VoicePlay("A020100000_01_100");
MsgDisp("Kazama","It's fine.
My flight back home got delayed so I just
kind of stopped by out of the blue.");
MsgDisp("主人公","Eh∋ So you really just got back
yesterday?");
NSSEye(1,0);
NSSMouth(1,3);
VoicePlay("A020100000_01_110");
MsgDisp("Kazama","Yeah, only me, without my parents.");
MsgDisp("Kazama","Yeah. I came back early. School in England
starts in September, so transferring now
took some work.");
MsgDisp("主人公","Oh, that makes sense......");
NSSEye(1,6);
NSSMouth(1,3);
NSSEyeOpenLevel(1,5);
VoicePlay("A020100000_01_120");
MsgDisp("Kazama","I thought I'd miss the April start here,
but I managed to make it just in time,
somehow.");
NSSEye(1,0);
NSSMouth(1,0);
VoicePlay("A020100000_01_130");
MsgDisp("Kazama","My dad still has work over there, but
since Grandpa owns an antique store here I
decided to come live here on my own for a
while.");
MsgDisp("主人公","You're gonna live in that big house all by
yourself?
Well, if you're ever in trouble—");
NSSEye(1,0);
NSSMouth(1,3);
NSSEyeOpenLevel(1,5);
VoicePlay("A020100000_01_140");
MsgDisp("Kazama","More importantly—");
NSSEye(1,6);
NSSMouth(1,0);
VoicePlay("A020100000_01_150");
MsgDisp("Kazama","......Do you remember?
That thing.");
NSSEyeOpenLevel(1,0);
Wait(20,0);
NSSEye(1,0);
MsgDisp("主人公","That thing......?");
MsgSel("The mysterious church with the ringing bell?","The wishes we made together to the pinwheel?","A lot of time has passed, I wonder what you're talking about......");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","The mysterious church with the ringing
bell?");
    NSSEye(1,6);
    NSSMouth(1,0);
    VoicePlay("A020100000_01_160");
    MsgDisp("Kazama","Well yeah, that too.
At that time, together in that church, we-");
    break ;
    case 1:
    MsgDisp("主人公","The wishes we made together to the
pinwheel?");
    NSSEye(1,6);
    NSSMouth(1,3);
    NSSCheek(1,7);
    VoicePlay("A020100000_01_170");
    MsgDisp("Kazama","That's it. I can tell just by looking at
you, that there's a good chance the wish
will come true......");
    break ;
    case 2:
    MsgDisp("主人公","A lot of time has passed, I wonder what
you're talking about......");
    NSSEye(1,2);
    NSSMouth(1,0);
    VoicePlay("A020100000_01_180");
    MsgDisp("Kazama","\"A lot of time\", huh...... You really
haven't changed. Still as carefree. I'm
worried.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1.5);
MsgClose();
ScrFadeOut(0);
NSSClose();
Wait(40,0);
BGOpen("sc110",0);
BGMPlay("BGM_ENT_CEREMONY",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,0,0,10,#1,0,0);
ScrFadeIn(0);
SEPlay("EV_SE_588");
SEPlay("EV_SE_789");
Wait(60,1);
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
Wait(120,1);
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,0);
Wait(60,1);
VoicePlay("A020100000_48_000");
MsgDisp("School Girl A","Look, over there!
That's Kazama Ryota-kun.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("A020100000_44_000");
MsgDisp("School Girl B","So the rumors were true～∈ What should we
do if we end up in his class～∋");
ChEye(1,4);
ChMouth(1,1);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("A020100000_48_010");
MsgDisp("School Girl A","I know right! My grandpa even called him
\"young master\" once! It's like he's
royalty or something!");
MsgDisp("主人公","? ｛風真＊＊｝, I think they're talking
about you......");
SEStop("EV_SE_588",1);
SEStop("EV_SE_789",1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("A020100000_01_190");
MsgDisp("Kazama","......... Can't hear them～ And don't
listen, either.");
MsgDisp("主人公","(\"Young Master\" huh...
Now I'm super curious......)");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChMouth(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("A020100000_01_200");
MsgDisp("Kazama","Don't go thinking something dumb like,
\"I'm curious about that \"Young Master\"
stuff\", got it?");
MsgDisp("主人公","∋
(He read my mind......)");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("A020100000_01_210");
MsgDisp("Kazama","You're way too easy to read!");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChPrmTblAdd(1,0);