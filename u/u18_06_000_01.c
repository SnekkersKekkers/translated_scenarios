switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Umm......");
    MsgDisp("主人公","It says... \"I got an unexpected email from
the Hanatsubaki twins saying 'Good luck▼'
What's that about?");
    MsgDisp("主人公","(Uhm...I have no clue. Sorry,
｛氷室＊＊｝...... )");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Umm......");
    MsgDisp("主人公","It says... \"Just now I ran into the
Hanatsubaki twins and they smiled and
winked at me. What's that about?\"");
    MsgDisp("主人公","(Geez, those two......! They're bothering
｛氷室＊＊｝! )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
