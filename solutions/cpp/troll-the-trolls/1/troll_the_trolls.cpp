namespace hellmath {

    enum class AccountStatus{
        troll,
        guest,
        user,
        mod
    };
    
    enum class Action{
        read,
        write,
        remove
    };

    bool display_post(AccountStatus poster, AccountStatus viewer){
        return !(poster == AccountStatus::troll && viewer != AccountStatus::troll);
    }    
    
    bool permission_check(Action act, AccountStatus status){
        switch(act){
            case Action::remove:
                return status == AccountStatus::mod;
            case Action::write:
                return status != AccountStatus::guest;
            default:
                return true;
        }
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player1, AccountStatus player2){
        switch(player1){
            case AccountStatus::guest:
                return false;
            case AccountStatus::troll:
                return player2 == AccountStatus::troll;
            default:
                return player2 == AccountStatus::mod || player2 == AccountStatus::user;
        }
    }

    bool has_priority(AccountStatus acc1, AccountStatus acc2){
        return static_cast<int>(acc1) > static_cast<int>(acc2);
    }

}  // namespace hellmath